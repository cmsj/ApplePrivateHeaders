/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/Versions/A/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BKPresenceDetectOperation.h>

@interface BKFaceDetectOperation : BKPresenceDetectOperation {

	char _highPriority;
	long long _mode;
	double _timeout;

}

@property (assign,nonatomic) long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double timeout;                                                 //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) char highPriority;                                              //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic,__weak) id<BKFaceDetectOperationDelegate> delegate; 
-(void)setMode:(long long)arg1 ;
-(double)timeout;
-(long long)mode;
-(void)setTimeout:(double)arg1 ;
-(void)setHighPriority:(char)arg1 ;
-(char)highPriority;
@end

