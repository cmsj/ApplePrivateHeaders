/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/Versions/A/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXSSKeyboardCommandInfo : NSObject {

	char _handlesBothDownAndUp;
	/*^block*/id _handler;
	/*^block*/id _downHandler;
	/*^block*/id _upHandler;

}

@property (nonatomic,readonly) char handlesBothDownAndUp;              //@synthesize handlesBothDownAndUp=_handlesBothDownAndUp - In the implementation block
@property (nonatomic,readonly) id handler;                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id downHandler;                         //@synthesize downHandler=_downHandler - In the implementation block
@property (nonatomic,readonly) id upHandler;                           //@synthesize upHandler=_upHandler - In the implementation block
+(id)infoWithHandler:(/*^block*/id)arg1 ;
+(id)infoWithDownHandler:(/*^block*/id)arg1 upHandler:(/*^block*/id)arg2 ;
-(id)handler;
-(id)_initWithHandler:(/*^block*/id)arg1 downHandler:(/*^block*/id)arg2 upHandler:(/*^block*/id)arg3 handlesBothDownAndUp:(char)arg4 ;
-(char)handlesBothDownAndUp;
-(id)downHandler;
-(id)upHandler;
@end

