borderLeft=0;
borderRight=0;
borderTop=0;
borderBottom=0;
color[]=common_white;
enableParallax=0;
font="EtelkaMonospacePro";

class material {
	ambient[] = {1, 1, 1, 1};
	diffuse[] = {0.5, 0.5, 0.5, 1};
	emissive[] = {100, 100, 100, 1};
};

class Bones {
};

class Draw {
	condition = COND_ISNUMBER(MFD_PAGE_INDEX,MFD_PAGE_JVMF);
	class jvmf_type_0 {
		condition=COND_ISNUMBER(JVMF_TYPE,0);
		// TEXT_LEFT_SCALED_USERTEXT(freetext00,0.65,0.2-(JVMF_LINE_SCALING*1),"SENDR01",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext01,0.13,0.2+(JVMF_LINE_SCALING*0)," > ? FRTXT SENDR01 2300      This is an example message",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext02,0.13,0.2+(JVMF_LINE_SCALING*1),"123456789-123456789-1234     123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext03,0.13,0.2+(JVMF_LINE_SCALING*2),"> POSRPT SENDR     12:00    123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext04,0.13,0.2+(JVMF_LINE_SCALING*3),"XXXXXXXXX-XXXXXXXXX-XXXX     123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext05,0.13,0.2+(JVMF_LINE_SCALING*4),"XXXXXXXXX-XXXXXXXXX-XXXX     123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext06,0.13,0.2+(JVMF_LINE_SCALING*5),"XXXXXXXXX-XXXXXXXXX-XXXX     123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext07,0.13,0.2+(JVMF_LINE_SCALING*6),"XXXXXXXXX-XXXXXXXXX-XXXX     123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext08,0.13,0.2+(JVMF_LINE_SCALING*7),"XXXXXXXXX-XXXXXXXXX-XXXX     123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext09,0.13,0.2+(JVMF_LINE_SCALING*8),"XXXXXXXXX-XXXXXXXXX-XXXX     123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext10,0.13,0.2+(JVMF_LINE_SCALING*9),"XXXXXXXXX-XXXXXXXXX-XXXX     123456789-123456789-12345678",0.03)
		// TEXT_LEFT_SCALED_USERTEXT(freetext00,0.65,0.2-(JVMF_LINE_SCALING*1),"SENDR01",0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext01,0.13,0.2+(JVMF_LINE_SCALING*0),31,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext02,0.13,0.2+(JVMF_LINE_SCALING*1),32,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext03,0.13,0.2+(JVMF_LINE_SCALING*2),33,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext04,0.13,0.2+(JVMF_LINE_SCALING*3),34,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext05,0.13,0.2+(JVMF_LINE_SCALING*4),35,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext06,0.13,0.2+(JVMF_LINE_SCALING*5),36,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext07,0.13,0.2+(JVMF_LINE_SCALING*6),37,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext08,0.13,0.2+(JVMF_LINE_SCALING*7),38,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext09,0.13,0.2+(JVMF_LINE_SCALING*8),39,0.03)
		TEXT_LEFT_SCALED_USERTEXT(freetext10,0.13,0.2+(JVMF_LINE_SCALING*9),40,0.03)
	};
	#define JVMF_LINE_SCALING 0.04
};