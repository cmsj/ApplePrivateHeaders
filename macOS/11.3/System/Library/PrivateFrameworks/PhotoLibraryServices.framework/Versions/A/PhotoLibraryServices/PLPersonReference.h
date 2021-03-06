/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSData, PLAdditionalAssetAttributes, PLPerson;

@interface PLPersonReference : PLManagedObject

@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSData * personData; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
@property (nonatomic,retain) PLPerson * person; 
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3 ;
@end

