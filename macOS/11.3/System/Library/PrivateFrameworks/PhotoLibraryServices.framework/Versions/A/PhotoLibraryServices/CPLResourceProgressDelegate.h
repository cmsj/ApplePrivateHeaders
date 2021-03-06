/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLResourceProgressDelegate <NSObject>
@optional
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 finalResource:(id)arg3 withError:(id)arg4;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;
-(void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
-(void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;

@required
-(void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;
-(void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
-(void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
-(void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;

@end

