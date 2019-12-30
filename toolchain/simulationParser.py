import xml.etree.ElementTree as ET

def getArgs():
	tree = ET.parse('simulationConfiguration.xml')
	root = tree.getroot()
	args=[]
	for ied in root:
		arg=[ied.attrib.get("folder"),ied.attrib.get("interface"),ied.attrib.get("port"),ied.attrib.get("duration")]
		args.append(arg)
	#print args
	return args
