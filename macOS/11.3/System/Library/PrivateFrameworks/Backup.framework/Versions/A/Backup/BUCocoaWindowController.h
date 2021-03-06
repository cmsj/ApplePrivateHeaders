/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Backup/Backup-Structs.h>
@interface BUCocoaWindowController : NSObject {

	double _maxX;
	double _minY;
	vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>>* _notificationCenterObservers;

}

@property (assign,nonatomic) double maxX;              //@synthesize maxX=_maxX - In the implementation block
@property (assign,nonatomic) double minY;              //@synthesize minY=_minY - In the implementation block
-(id)initWithWindow:(id)arg1 ;
-(char)interceptsWindowClose:(id)arg1 ;
-(CGRect)windowWillChangeFrame:(id)arg1 toFrame:(CGRect)arg2 ;
-(void)setMinY:(double)arg1 ;
-(void)setMaxX:(double)arg1 ;
-(double)minY;
-(double)maxX;
@end

