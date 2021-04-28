/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLScopedIdentifier, CPLRecordChange;

@interface CPLRecordView : NSObject

@property (nonatomic,readonly) CPLScopedIdentifier * scopedIdentifier; 
@property (nonatomic,readonly) CPLRecordChange * synthesizedRecord; 
-(id)description;
-(id)redactedDescription;
-(id)relation;
-(CPLScopedIdentifier *)scopedIdentifier;
-(char)supportsResources;
-(Class)recordClass;
-(CPLRecordChange *)synthesizedRecord;
-(id)relatedScopedIdentifier;
-(id)secondaryScopedIdentifier;
-(id)changeForType:(unsigned long long)arg1 ;
@end
