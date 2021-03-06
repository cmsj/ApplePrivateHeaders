/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBSInvalidatable;
@class NSString;

@interface RBStateCaptureItem : NSObject {

	id<RBSInvalidatable> _invalidatable;
	/*^block*/id _block;
	NSString* _title;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)block;
-(NSString *)title;
@end

