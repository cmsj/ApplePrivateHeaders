/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ContactsUICore/ContactsUICore-Structs.h>
@interface CNUIAvatarLayoutItemConfiguration : NSObject {

	double _size;
	double _x;
	double _y;
	double _baseSize;

}

@property (assign,nonatomic) double size;                  //@synthesize size=_size - In the implementation block
@property (assign,x,nonatomic) double x;                   //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                   //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) double baseSize;              //@synthesize baseSize=_baseSize - In the implementation block
-(double)size;
-(void)setSize:(double)arg1 ;
-(double)x;
-(double)y;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(double)baseSize;
-(CGRect)itemFrameInContainingBounds:(CGRect)arg1 isRTL:(char)arg2 ;
-(void)updateLayer:(id)arg1 inBounds:(CGRect)arg2 atIndex:(long long)arg3 isRTL:(char)arg4 ;
-(id)initWithSize:(double)arg1 x:(double)arg2 y:(double)arg3 baseSize:(double)arg4 ;
-(void)setBaseSize:(double)arg1 ;
@end

