/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MPAction.h>
#import <libobjc.A.dylib/MPActionSupport.h>

@class NSString, MPAction;

@interface MPConditionalAction : MPAction <MPActionSupport> {

	NSString* _predicate;
	MPAction* _actionIfTrue;
	MPAction* _actionIfFalse;

}

@property (nonatomic,copy) NSString * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (readonly) MPAction * actionIfTrue;                 //@synthesize actionIfTrue=_actionIfTrue - In the implementation block
@property (readonly) MPAction * actionIfFalse;                //@synthesize actionIfFalse=_actionIfFalse - In the implementation block
+(id)conditionalAction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSString *)predicate;
-(void)setPredicate:(NSString *)arg1 ;
-(void)configureTarget;
-(void)setAction:(id)arg1 forCondition:(char)arg2 ;
-(MPAction *)actionIfTrue;
-(MPAction *)actionIfFalse;
-(void)configureActions;
@end
