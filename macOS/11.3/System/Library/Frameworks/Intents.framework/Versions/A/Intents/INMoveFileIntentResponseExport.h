/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSArray, NSString;


@protocol INMoveFileIntentResponseExport <NSObject,JSExport>
@property (readonly) long long code; 
@property (copy) NSNumber * overwrite; 
@property (copy) NSNumber * success; 
@property (assign) unsigned long long entityTypes; 
@property (copy) NSArray * entityNames; 
@property (copy) NSString * sourceName; 
@property (copy) NSString * destinationName; 
@required
-(long long)code;
-(NSNumber *)success;
-(NSString *)destinationName;
-(void)setDestinationName:(id)arg1;
-(NSArray *)entityNames;
-(void)setEntityNames:(id)arg1;
-(void)setSourceName:(id)arg1;
-(NSString *)sourceName;
-(void)setSuccess:(id)arg1;
-(unsigned long long)entityTypes;
-(NSNumber *)overwrite;
-(void)setOverwrite:(id)arg1;
-(void)setEntityTypes:(unsigned long long)arg1;

@end

