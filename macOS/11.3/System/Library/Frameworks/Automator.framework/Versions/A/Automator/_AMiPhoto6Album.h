/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMiPhoto6Item.h>

@class NSArray, NSString;

@interface _AMiPhoto6Album : _AMiPhoto6Item

@property (copy,readonly) NSArray * children; 
@property (copy) NSString * name; 
@property (copy,readonly) _AMiPhoto6Album * parent; 
@property (readonly) int type; 
@property (copy,readonly) NSString * url; 
-(NSString *)name;
-(int)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)url;
-(_AMiPhoto6Album *)parent;
-(NSArray *)children;
-(id)keywords;
-(id)photos;
-(long long)id;
@end

