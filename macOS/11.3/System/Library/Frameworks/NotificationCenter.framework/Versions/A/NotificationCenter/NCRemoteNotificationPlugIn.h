/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <NotificationCenter/NCRemotePlugIn.h>

@interface NCRemoteNotificationPlugIn : NCRemotePlugIn {

	BOOL _fullCustomPlugIn;

}

@property (readonly) BOOL fullCustomPlugIn;              //@synthesize fullCustomPlugIn=_fullCustomPlugIn - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)setupPlugIn;
-(BOOL)fullCustomPlugIn;
@end
