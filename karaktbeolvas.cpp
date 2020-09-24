Hero Hero::parseUnit(const std::string& fileName){
    std::fstream file;
    std::string line;
    file.open(fileName);
    std::string readline, name, hp, dmg;
    
    const std::string delimiter = ":";
    
    if(file.is_open()){
        while (getline(file, line)) {
            for (int i = 0; i < line.size(); i++) {
                if (isalnum(line[i])) {
                    if (readline == "name"){
                        name += line[i];
                    }
                    else if (readline == "hp"){
                        hp += line[i];
                    }
                    else if (readline == "dmg"){
                        dmg += line[i];
                    }
                    else readline += line[i];
                }
            }
            readline = "";
        }
        
    }
    
    file.close();
    return Hero(name,stoi(hp),stoi(dmg));
}
