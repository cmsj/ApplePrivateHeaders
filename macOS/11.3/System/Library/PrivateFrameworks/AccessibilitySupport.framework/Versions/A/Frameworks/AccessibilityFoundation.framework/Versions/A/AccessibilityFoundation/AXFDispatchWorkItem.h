/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXFDispatchWorkItem : NSObject {

	/*^block*/id ___block;
	unsigned long long __attributes;

}

@property (nonatomic,readonly) id _block;                                   //@synthesize __block=___block - In the implementation block
@property (nonatomic,readonly) unsigned long long _attributes;              //@synthesize _attributes=__attributes - In the implementation block
@property (readonly) char isCancelled; 
-(void)notifyWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)notifyWithQueue:(id)arg1 workItem:(id)arg2 ;
-(id)_block;
-(void)cancel;
-(unsigned long long)_attributes;
-(char)isCancelled;
-(void)wait;
-(char)waitWithTimeout:(long long)arg1 ;
-(id)initWithAttributes:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end

