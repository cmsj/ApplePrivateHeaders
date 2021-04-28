/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, DDLocation;

@interface DDAbstractType : NSObject {

	NSArray* _arguments;
	NSString* _name;
	int _kind;
	DDLocation* _location;

}

@property (readonly) char isEmpty; 
@property (readonly) char isAny; 
@property (readonly) char isFlatName; 
@property (readonly) int kind;                         //@synthesize kind=_kind - In the implementation block
@property (readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (readonly) NSArray * arguments;              //@synthesize arguments=_arguments - In the implementation block
@property (retain) DDLocation * location;              //@synthesize location=_location - In the implementation block
+(id)typeWithName:(id)arg1 components:(id)arg2 kind:(int)arg3 location:(id)arg4 ;
+(id)typeWithName:(id)arg1 component:(id)arg2 kind:(int)arg3 location:(id)arg4 ;
+(id)emptyType;
+(id)anyType;
-(id)initWithName:(id)arg1 components:(id)arg2 kind:(int)arg3 location:(id)arg4 ;
-(id)initWithNameType:(id)arg1 ;
-(id)initWithDisjunctionArg1:(id)arg1 arg2:(id)arg2 ;
-(id)initWithConjunctionArg1:(id)arg1 arg2:(id)arg2 ;
-(id)initWithOptional:(id)arg1 ;
-(char)isFlatName;
-(void)_appendComponents:(id)arg1 ;
-(void)appendDescription:(id)arg1 ;
-(id)computeInhabitant:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(char)isEmpty;
-(DDLocation *)location;
-(NSArray *)arguments;
-(id)argument;
-(int)kind;
-(void)setLocation:(DDLocation *)arg1 ;
-(char)isAny;
-(id)verboseDescription;
@end
