/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface GEOAvailableExperiment : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSMutableArray* _branches;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * branches;                 //@synthesize branches=_branches - In the implementation block
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(void)_addBranch:(id)arg1 ;
-(id)_branchForLabel:(id)arg1 ;
-(NSArray *)branches;
@end

