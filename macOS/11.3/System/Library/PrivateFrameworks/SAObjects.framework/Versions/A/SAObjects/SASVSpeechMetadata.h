/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASVSpeechMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * phraseDataList; 
@property (nonatomic,copy) NSString * preITN; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechMetadata;
+(id)speechMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)phraseDataList;
-(void)setPhraseDataList:(NSArray *)arg1 ;
-(NSString *)preITN;
-(void)setPreITN:(NSString *)arg1 ;
@end

