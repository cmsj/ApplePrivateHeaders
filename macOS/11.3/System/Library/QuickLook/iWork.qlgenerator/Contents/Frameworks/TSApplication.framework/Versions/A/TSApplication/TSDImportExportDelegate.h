/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMapTable;


@protocol TSDImportExportDelegate <NSObject>
@property (nonatomic,readonly) NSMapTable * incompatibleMediaContainersWithDataUnsupportedOnThisDevice; 
@property (nonatomic,readonly) NSMapTable * incompatibleMediaContainersWithDataUnsupportedOnAllDevices; 
@property (nonatomic,readonly) char isBrowsingVersions; 
@optional
-(char)isBrowsingVersions;
-(void)addIncompatibleMediaContainer:(id)arg1 incompatibleData:(id)arg2 compatibilityLevel:(long long)arg3;
-(void)replaceIncompatibleMediaContainer:(id)arg1 withNewMediaContainer:(id)arg2;
-(void)removeIncompatibleMediaContainer:(id)arg1;
-(NSMapTable *)incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
-(NSMapTable *)incompatibleMediaContainersWithDataUnsupportedOnAllDevices;

@required
-(void)addWarning:(id)arg1;
-(id)warnings;
-(void)removeWarning:(id)arg1;

@end

