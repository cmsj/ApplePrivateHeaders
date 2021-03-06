/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject <NSSecureCoding> {

	unsigned long long _estimatedInitialSizeForLocalLibrary;
	unsigned long long _estimatedInitialAssetCountForLocalLibrary;
	CPLResetTracker* _resetTracker;

}

@property (assign,nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;                    //@synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;              //@synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary - In the implementation block
@property (nonatomic,retain) CPLResetTracker * resetTracker;                                            //@synthesize resetTracker=_resetTracker - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEstimatedInitialAssetCountForLocalLibrary:(unsigned long long)arg1 ;
-(void)setEstimatedInitialSizeForLocalLibrary:(unsigned long long)arg1 ;
-(unsigned long long)estimatedInitialSizeForLocalLibrary;
-(unsigned long long)estimatedInitialAssetCountForLocalLibrary;
-(CPLResetTracker *)resetTracker;
-(void)setResetTracker:(CPLResetTracker *)arg1 ;
@end

