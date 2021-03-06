/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/Versions/A/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ASTIdentity;


@protocol ASTConnectionManager <NSObject>
@property (assign,nonatomic,__weak) id<ASTConnectionManagerDelegate> delegate; 
@property (nonatomic,retain) ASTIdentity * identity; 
@required
-(id<ASTConnectionManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(ASTIdentity *)identity;
-(void)setIdentity:(id)arg1;
-(void)postSessionExistsForIdentities:(id)arg1 ticket:(id)arg2 timeout:(double)arg3 allowsCellularAccess:(char)arg4 completion:(/*^block*/id)arg5;
-(id)postEnrollAllowingCellularAccess:(char)arg1;
-(id)postRequest:(id)arg1 allowsCellularAccess:(char)arg2;
-(char)postAuthInfo:(id)arg1 allowsCellularAccess:(char)arg2;
-(char)postProfile:(id)arg1 allowsCellularAccess:(char)arg2;
-(void)postSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 allowsCellularAccess:(char)arg6 completion:(/*^block*/id)arg7;
-(void)postTestResult:(id)arg1 allowsCellularAccess:(char)arg2 completion:(/*^block*/id)arg3;
-(void)cancelAllTestResults;
-(void)downloadAsset:(id)arg1 destinationFileHandle:(id)arg2 allowsCellularAccess:(char)arg3 completion:(/*^block*/id)arg4;

@end

