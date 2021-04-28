/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarPersistence/CalendarPersistence-Structs.h>
@class NSString, NSMutableData, NSMutableDictionary;

@interface CALvCALParsedLine : NSObject {

	int _type;
	int _token_id;
	NSString* _keyword;
	NSMutableData* _content;
	NSMutableDictionary* _params;
	char _usePalmD4Hooks;

}
+(int)tokenizeNSStringKeyword:(id)arg1 withType:(int*)arg2 ;
+(const SCD_Struct_CA3*)lookupProperty:(int)arg1 ;
+(int)tokenizeKeyword:(const char*)arg1 withType:(int*)arg2 ;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)reset;
-(id)content;
-(int)tokenID;
-(id)keyword;
-(id)params;
-(id)loadFromCString:(char*)arg1 withParseState:(id)arg2 ;
-(id)convertedContent;
-(void)setKeywordFromCString:(char*)arg1 ;
-(void)setTokenID:(int)arg1 ;
-(void)setContentFromCString:(char*)arg1 ;
-(void)setUsePalmD4Hooks:(char)arg1 ;
@end
