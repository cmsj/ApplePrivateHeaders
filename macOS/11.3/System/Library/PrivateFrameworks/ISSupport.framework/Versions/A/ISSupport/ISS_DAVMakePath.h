/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DAVMakePath : ISS_DAVRequest
+(id)makePathRequestWithURL:(id)arg1 ;
+(id)makePathRequestWithSession:(id)arg1 path:(id)arg2 ;
-(void)finalizeOperation;
-(id)dependenciesList;
-(id)initMakePathWithURL:(id)arg1 ;
-(id)initMakePathWithSession:(id)arg1 path:(id)arg2 ;
@end

