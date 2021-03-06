/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIToolbox/HIToolbox-Structs.h>
#import <HIToolbox/PluginReaderGenericModule.h>

@class NSMutableDictionary;

@interface PluginReaderDATFileModule : PluginReaderGenericModule {

	DumpFileHeaderStruct _fileHeader;
	char* _keyToken;
	char* _dataToken;
	_sFILE* _file;
	char* _keyList;
	NSMutableDictionary* _dictionary;
	char _parseOnlyForBasicProperties;

}
-(id)initForBasicPropertiesWithFile:(id)arg1 ;
-(char)parseForBasicProperties;
-(void)writePluginInformationIntoDictionary;
-(char)_isWhitespace:(unsigned short)arg1 ;
-(int)_goThroughWhitespace:(id)arg1 forPosition:(int)arg2 ;
-(int)_fillToken:(char*)arg1 withString:(id)arg2 position:(int)arg3 ;
-(id)_getRestOfFile;
-(int)_getNextKeyAndDataToken:(id)arg1 forPosition:(int)arg2 ;
-(char)_processHeader;
-(void)_parseHashTable;
-(char)_parseFile;
-(void)_parseHeader;
-(char)parse;
-(id)initWithFileName:(id)arg1 ;
@end

