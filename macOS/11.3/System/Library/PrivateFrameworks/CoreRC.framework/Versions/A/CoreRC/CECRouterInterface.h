/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CECInterface.h>

@class CECRouter;

@interface CECRouterInterface : CECInterface {

	CECRouter* _router;

}
-(void)dealloc;
-(id)properties;
-(char)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(void)receivedFrame:(CECFrame)arg1 ;
-(char)setAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(char)setPromiscMode:(char)arg1 error:(id*)arg2 ;
-(id)initWithRouter:(id)arg1 ;
@end

