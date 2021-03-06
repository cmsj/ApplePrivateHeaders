/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSData;


@protocol EDIndexableItem <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * domainIdentifier; 
@property (assign,nonatomic) long long indexingType; 
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) unsigned long long itemInstantiationTime; 
@property (nonatomic,readonly) unsigned long long estimatedSizeInBytes; 
@property (nonatomic,retain) NSData * underlyingData; 
@property (nonatomic,readonly) char hasCompleteData; 
@property (nonatomic,readonly) char alwaysMarkAsIndexed; 
@property (nonatomic,readonly) char shouldExcludeFromIndex; 
@property (nonatomic,readonly) char requiresPreprocessing; 
@required
-(long long)compare:(id)arg1;
-(NSString *)domainIdentifier;
-(NSString *)identifier;
-(id)searchableItem;
-(NSData *)underlyingData;
-(void)preprocess;
-(NSDate *)dateReceived;
-(long long)indexingType;
-(void)setNeedsAllAttributesIndexingType;
-(void)setIndexingType:(long long)arg1;
-(unsigned long long)estimatedSizeInBytes;
-(id)fetchIndexableAttachments;
-(char)shouldExcludeFromIndex;
-(char)alwaysMarkAsIndexed;
-(char)requiresPreprocessing;
-(unsigned long long)itemInstantiationTime;
-(void)setUnderlyingData:(id)arg1;
-(char)hasCompleteData;

@end

