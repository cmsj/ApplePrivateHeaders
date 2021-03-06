/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Translation/Translation-Structs.h>
@class NSDictionary, NSString;

@interface _LTMatch : NSObject {

	NSDictionary* _node;
	NSString* _token;
	NSRange _range;

}

@property (nonatomic,retain) NSDictionary * node;              //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) NSRange range;                    //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSString * token;                 //@synthesize token=_token - In the implementation block
-(id)description;
-(NSDictionary *)node;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setNode:(NSDictionary *)arg1 ;
-(id)initWithNode:(id)arg1 range:(NSRange)arg2 ;
@end

