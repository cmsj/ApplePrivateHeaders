/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLiCPLTransferProgress : NSObject {

	unsigned long long _notUploadedPhotosCount;
	unsigned long long _notUploadedVideosCount;
	unsigned long long _notUploadedItemsCount;

}

@property (assign,nonatomic) unsigned long long notUploadedPhotosCount;              //@synthesize notUploadedPhotosCount=_notUploadedPhotosCount - In the implementation block
@property (assign,nonatomic) unsigned long long notUploadedVideosCount;              //@synthesize notUploadedVideosCount=_notUploadedVideosCount - In the implementation block
@property (assign,nonatomic) unsigned long long notUploadedItemsCount;               //@synthesize notUploadedItemsCount=_notUploadedItemsCount - In the implementation block
-(id)description;
-(unsigned long long)notUploadedPhotosCount;
-(unsigned long long)notUploadedVideosCount;
-(unsigned long long)notUploadedItemsCount;
-(void)setNotUploadedPhotosCount:(unsigned long long)arg1 ;
-(void)setNotUploadedVideosCount:(unsigned long long)arg1 ;
-(void)setNotUploadedItemsCount:(unsigned long long)arg1 ;
@end

