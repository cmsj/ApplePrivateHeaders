/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableDictionary, NSDictionary;

@interface ODMappings : NSObject {

	NSString* comment;
	NSString* templateName;
	NSString* identifier;
	NSString* function;
	NSArray* functionAttributes;
	NSMutableDictionary* recordTypes;

}

@property (copy,readonly) NSDictionary * dictionary; 
@property (copy) NSString * comment; 
@property (copy) NSString * templateName; 
@property (copy) NSString * identifier; 
@property (copy,readonly) NSArray * recordTypes; 
@property (copy) NSString * function; 
@property (copy) NSArray * functionAttributes; 
+(id)mappingsFromDictionary:(id)arg1 ;
+(id)mappings;
-(void)setFunctionAttributes:(NSArray *)arg1 ;
-(id)recordMapForStandardRecordType:(id)arg1 ;
-(void)setRecordMap:(id)arg1 forStandardRecordType:(id)arg2 ;
-(NSArray *)functionAttributes;
-(void)dealloc;
-(id)init;
-(NSDictionary *)dictionary;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)function;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
-(NSString *)templateName;
-(void)setTemplateName:(NSString *)arg1 ;
-(void)setFunction:(NSString *)arg1 ;
-(NSArray *)recordTypes;
@end

