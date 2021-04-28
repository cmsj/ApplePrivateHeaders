/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString, NSArray, NSMutableSet;

@interface FCLocalRegion : NSObject {

	NSString* _identifier;
	NSArray* _autoFavoriteTagIDs;
	NSArray* _localVersionedTagIDs;
	NSString* _name;
	NSMutableSet* _areas;
	CGRect _rect;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableSet * areas;                          //@synthesize areas=_areas - In the implementation block
@property (assign,nonatomic) CGRect rect;                                   //@synthesize rect=_rect - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * autoFavoriteTagIDs;                //@synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs - In the implementation block
@property (nonatomic,readonly) NSArray * localVersionedTagIDs;              //@synthesize localVersionedTagIDs=_localVersionedTagIDs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(NSMutableSet *)areas;
-(void)addLocalArea:(id)arg1 ;
-(CGRect)rectForEntireRegion;
-(NSArray *)autoFavoriteTagIDs;
-(NSArray *)localVersionedTagIDs;
-(void)setAreas:(NSMutableSet *)arg1 ;
@end
