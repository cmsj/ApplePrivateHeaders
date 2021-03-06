/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKStudentDaemonProxyObserver.h>
#import <libobjc.A.dylib/CRKStudentConnection.h>

@class CRKStudentDaemonProxy, NSHashTable, NSString;

@interface CRKConcreteStudentConnection : NSObject <CRKStudentDaemonProxyObserver, CRKStudentConnection> {

	CRKStudentDaemonProxy* _studentDaemonProxy;
	/*^block*/id _invalidationHandler;
	NSHashTable* _notificationObservations;

}

@property (nonatomic,readonly) CRKStudentDaemonProxy * studentDaemonProxy;              //@synthesize studentDaemonProxy=_studentDaemonProxy - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSHashTable * notificationObservations;                  //@synthesize notificationObservations=_notificationObservations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionWithStudentDaemonProxy:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)operationForRequest:(id)arg1 ;
-(CRKStudentDaemonProxy *)studentDaemonProxy;
-(id)initWithStudentDaemonProxy:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(NSHashTable *)notificationObservations;
-(void)daemonProxyDidDisconnect:(id)arg1 ;
-(void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(id)observeNotificationWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

