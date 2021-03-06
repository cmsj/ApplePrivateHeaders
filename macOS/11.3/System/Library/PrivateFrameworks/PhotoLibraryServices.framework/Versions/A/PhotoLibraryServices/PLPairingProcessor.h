/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate;

@interface PLPairingProcessor : NSObject {

	NSPredicate* _locatedInUsersPhotoLibrary;

}

@property (nonatomic,retain) NSPredicate * locatedInUsersPhotoLibrary;              //@synthesize locatedInUsersPhotoLibrary=_locatedInUsersPhotoLibrary - In the implementation block
-(id)init;
-(id)groupIDForAsset:(id)arg1 ;
-(id)firstGroupFromAssets:(id)arg1 ;
-(id)combinePair:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestForLibrary;
-(id)fetchRequestForSortedGroupIDs:(id)arg1 ;
-(void)setDeferredProcessingIfNescessaryForAsset:(id)arg1 ;
-(char)_copyResourceOfType:(unsigned)arg1 onAsset:(id)arg2 toType:(unsigned)arg3 onAsset:(id)arg4 error:(id*)arg5 ;
-(NSPredicate *)locatedInUsersPhotoLibrary;
-(char)updatePrimaryAsset:(id)arg1 andRemoveAssetIfPossible:(id)arg2 ;
-(char)processPairingForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(char)_copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)_deleteResourceOfType:(unsigned)arg1 forAsset:(id)arg2 verifyInserted:(char)arg3 deleteFile:(char)arg4 ;
-(void)setLocatedInUsersPhotoLibrary:(NSPredicate *)arg1 ;
@end

