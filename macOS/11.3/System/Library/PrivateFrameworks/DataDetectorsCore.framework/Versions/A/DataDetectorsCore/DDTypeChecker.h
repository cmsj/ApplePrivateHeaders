/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDTypeCheckerDelegate;
@class NSMutableDictionary, NSDictionary;

@interface DDTypeChecker : NSObject {

	NSMutableDictionary* _cache;
	NSDictionary* _collection;
	id<DDTypeCheckerDelegate> _delegate;

}

@property (assign) id<DDTypeCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTypeCollection:(id)arg1 ;
-(int)_deepValidateSubComponentRec:(id)arg1 ;
-(int)_validateCurrent:(id)arg1 ;
-(int)validateNamedType:(id)arg1 ;
-(int)_validateRec:(id)arg1 ;
-(void)dealloc;
-(id<DDTypeCheckerDelegate>)delegate;
-(void)setDelegate:(id<DDTypeCheckerDelegate>)arg1 ;
-(char)validate:(id)arg1 ;
@end
