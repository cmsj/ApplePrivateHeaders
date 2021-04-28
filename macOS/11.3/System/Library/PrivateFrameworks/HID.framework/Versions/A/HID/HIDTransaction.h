/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/Versions/A/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HID/HID-Structs.h>
@interface HIDTransaction : NSObject {

	IOHIDTransactionRef _transaction;

}

@property (assign) long long direction; 
-(char)commitElements:(id)arg1 error:(out id*)arg2 ;
-(void)dealloc;
-(id)description;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end
