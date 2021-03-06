/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet, NSDate;


@protocol PLSyncableAsset <NSObject,PLSyncableObject>
@property (nonatomic,retain,readonly) NSString * cloudIdentifier; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) char faceDetectionComplete; 
@property (nonatomic,copy,readonly) NSDate * dateForComparingAdjustmentVersions; 
@property (nonatomic,readonly) id faceAdjustmentVersion; 
@property (nonatomic,copy,readonly) NSString * syncedAdjustmentFingerprint; 
@property (nonatomic,readonly) char hasAdjustments; 
@required
-(long long)width;
-(long long)height;
-(NSString *)cloudIdentifier;
-(char)hasAdjustments;
-(NSSet *)detectedFaces;
-(void)setDetectedFaces:(id)arg1;
-(id)faceAdjustmentVersion;
-(id)syncDescription;
-(NSString *)syncedAdjustmentFingerprint;
-(char)faceDetectionComplete;
-(NSDate *)dateForComparingAdjustmentVersions;
-(void)markForNeedingFaceDetection;

@end

