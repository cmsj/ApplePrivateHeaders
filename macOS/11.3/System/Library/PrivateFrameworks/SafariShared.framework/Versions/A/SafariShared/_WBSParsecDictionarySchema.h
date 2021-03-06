/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecSchema.h>

@class NSDictionary;

@interface _WBSParsecDictionarySchema : WBSParsecSchema {

	NSDictionary* _keysToSchemata;

}

@property (nonatomic,copy) NSDictionary * keysToSchemata;              //@synthesize keysToSchemata=_keysToSchemata - In the implementation block
-(id)initWithSchemaDictionary:(id)arg1 associatedError:(id)arg2 isOptional:(char)arg3 ;
-(char)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)keysToSchemata;
-(void)setKeysToSchemata:(NSDictionary *)arg1 ;
@end

