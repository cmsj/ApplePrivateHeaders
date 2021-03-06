/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSView, QTHUDGroupView;

@interface QTHUDGroupViewItem : NSObject <NSCoding> {

	NSView* _view;
	QTHUDGroupView* _groupView;
	CGSize _minSize;
	CGSize _maxSize;
	void* _observationInfo;
	struct {
		unsigned hidden : 1;
		unsigned reserved : 31;
	}  _flags;
	double _margins[4];

}
+(void)initialize;
+(char)automaticallyNotifiesObserversOfView;
+(char)automaticallyNotifiesObserversOfHidden;
+(char)automaticallyNotifiesObserversOfMinSize;
+(char)automaticallyNotifiesObserversOfMaxSize;
+(char)automaticallyNotifiesObserversOfGroupView;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)setObservationInfo:(void*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(id)view;
-(void*)observationInfo;
-(void)setView:(id)arg1 ;
-(CGSize)minSize;
-(CGSize)maxSize;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(id)groupView;
-(void)setGroupView:(id)arg1 ;
@end

