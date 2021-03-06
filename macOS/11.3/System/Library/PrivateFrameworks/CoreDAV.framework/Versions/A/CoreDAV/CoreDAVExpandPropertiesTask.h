/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {

	NSMutableSet* _propertiesToExpand;

}

@property (nonatomic,retain) NSMutableSet * propertiesToExpand;              //@synthesize propertiesToExpand=_propertiesToExpand - In the implementation block
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 expandedName:(id)arg3 expandedNameSpace:(id)arg4 ;
-(void)addPropertyToExpandWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(id)parseHints;
-(void)setPropertiesToExpand:(NSMutableSet *)arg1 ;
-(NSMutableSet *)propertiesToExpand;
@end

