namespace sclog{
	void info(std::string message){
		std::cout << "[INFO] " << message << "\n";
	}
	void warning(std::string& message){}
	void debug(std::string& message){}
	void verbose(std::string& message){}
	void error(std::string& message){}
	void fatal(std::string& message){}
}
