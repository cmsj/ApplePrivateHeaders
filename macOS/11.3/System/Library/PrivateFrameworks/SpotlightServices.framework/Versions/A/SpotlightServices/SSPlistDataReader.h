/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/Versions/A/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpotlightServices/SpotlightServices-Structs.h>
@class NSMutableArray, NSArray;

@interface SSPlistDataReader : NSObject {

	MDPlistContainerRef _container;
	SCD_Struct_SS8 _obj;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSMutableArray * allKeys; 
@property (nonatomic,readonly) NSArray * blocklist; 
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(MDPlistContainerRef)container;
-(NSMutableArray *)allKeys;
-(NSArray *)blocklist;
-(double)doubleValueForBundle:(id)arg1 ;
-(double)doubleValueForKey:(const char*)arg1 ;
-(id)initWithPlistContainer:(MDPlistContainerRef)arg1 ;
-(id)initWithPlistContainer:(MDPlistContainerRef)arg1 obj:(SCD_Struct_SS9)arg2 ;
-(char)doesBundleExistInAppAllowList:(id)arg1 ;
@end

