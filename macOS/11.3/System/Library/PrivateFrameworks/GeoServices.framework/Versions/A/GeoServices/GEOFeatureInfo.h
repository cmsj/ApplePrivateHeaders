/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface GEOFeatureInfo : NSObject {

	NSString* _name;
	NSArray* _environments;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * environments;              //@synthesize environments=_environments - In the implementation block
@property (assign,nonatomic) long long state; 
-(NSString *)name;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithName:(id)arg1 environments:(id)arg2 ;
-(NSArray *)environments;
@end

