/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFLocking, HMDUserManagementOperationDelegate, OS_dispatch_queue;
@class NSMutableArray, HMDUserManagementOperationManager, NSUUID, HMDUser, HMDAccessory, NSDate, HAPPairingIdentity, NSObject, HMFTimer, NSArray, HMDAccessoryInvitation, NSDictionary, NSString;

@interface HMDUserManagementOperation : HMFObject <HMFTimerDelegate, NSSecureCoding> {

	id<HMFLocking> _lock;
	NSMutableArray* _dependencies;
	char _executing;
	char _backingOff;
	char _lastOperationFailed;
	unsigned long long _state;
	HMDUserManagementOperationManager* _operationManager;
	id<HMDUserManagementOperationDelegate> _delegate;
	NSUUID* _identifier;
	unsigned long long _operationType;
	HMDUser* _user;
	HMDAccessory* _accessory;
	NSDate* _expirationDate;
	HAPPairingIdentity* _ownerPairingIdentity;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMFTimer* _expirationTimer;
	double _backoffInterval;
	HMFTimer* _backoffTimer;
	NSArray* _auditUsersToBeAdded;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,getter=isExecuting,nonatomic) char executing;                                 //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) HMFTimer * expirationTimer;                                      //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) HMDUserManagementOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (nonatomic,readonly) double backoffInterval;                                          //@synthesize backoffInterval=_backoffInterval - In the implementation block
@property (nonatomic,retain) HMFTimer * backoffTimer;                                           //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (assign,getter=isBackingOff,nonatomic) char backingOff;                               //@synthesize backingOff=_backingOff - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HMDAccessory * accessory;                                          //@synthesize accessory=_accessory - In the implementation block
@property (getter=isAddOperation,nonatomic,readonly) char addOperation; 
@property (getter=isRemoveOperation,nonatomic,readonly) char removeOperation; 
@property (getter=isAuditOperation,nonatomic,readonly) char auditOperation; 
@property (nonatomic,retain) NSArray * auditUsersToBeAdded;                                     //@synthesize auditUsersToBeAdded=_auditUsersToBeAdded - In the implementation block
@property (assign,nonatomic) char lastOperationFailed;                                          //@synthesize lastOperationFailed=_lastOperationFailed - In the implementation block
@property (nonatomic,readonly) HMDAccessoryInvitation * accessoryInvitation; 
@property (nonatomic,readonly) NSDictionary * accessoryInvitationInformation; 
@property (__weak) id<HMDUserManagementOperationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long operationType;                                //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (getter=isFinished,nonatomic,readonly) char finished; 
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (getter=isReady,nonatomic,readonly) char ready; 
@property (getter=isExpired,nonatomic,readonly) char expired; 
@property (nonatomic,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (nonatomic,copy) HAPPairingIdentity * ownerPairingIdentity;                           //@synthesize ownerPairingIdentity=_ownerPairingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)supportsSecureCoding;
+(id)shortDescription;
+(id)operationWithDictionary:(id)arg1 home:(id)arg2 ;
+(id)auditUserManagementOperationAccessory:(id)arg1 model:(id)arg2 ;
+(id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 model:(id)arg3 ;
+(id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 model:(id)arg3 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMDUserManagementOperationDelegate>)delegate;
-(void)setDelegate:(id<HMDUserManagementOperationDelegate>)arg1 ;
-(unsigned long long)state;
-(HMDUser *)user;
-(NSUUID *)identifier;
-(unsigned long long)operationType;
-(void)setState:(unsigned long long)arg1 ;
-(void)cancel;
-(char)isCancelled;
-(char)isFinished;
-(char)isExecuting;
-(char)isReady;
-(NSArray *)dependencies;
-(void)addDependency:(id)arg1 ;
-(NSDate *)expirationDate;
-(char)_isFinished;
-(id)shortDescription;
-(void)setExecuting:(char)arg1 ;
-(char)isExpired;
-(HMDAccessory *)accessory;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(HMFTimer *)backoffTimer;
-(void)setBackoffTimer:(HMFTimer *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)descriptionWithPointer:(char)arg1 ;
-(double)backoffInterval;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(NSDictionary *)accessoryInvitationInformation;
-(HMDAccessoryInvitation *)accessoryInvitation;
-(id)dictionaryEncoding;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 parentUUID:(id)arg2 ;
-(void)executeWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOwnerPairingIdentity:(HAPPairingIdentity *)arg1 ;
-(char)isAuditOperation;
-(NSArray *)auditUsersToBeAdded;
-(char)isAddOperation;
-(void)populateModelObjectWithChangeType:(id)arg1 version:(long long)arg2 ;
-(void)setOperationManager:(HMDUserManagementOperationManager *)arg1 ;
-(id)initWithOperationType:(unsigned long long)arg1 identifier:(id)arg2 user:(id)arg3 accessory:(id)arg4 expiration:(id)arg5 ;
-(void)_setupExpirationTimer;
-(HMFTimer *)expirationTimer;
-(char)isBackingOff;
-(HMDUserManagementOperationManager *)operationManager;
-(double)nextBackoffInterval;
-(void)setBackingOff:(char)arg1 ;
-(void)setLastOperationFailed:(char)arg1 ;
-(void)_startBackoffTimer;
-(void)_addPairingToHAPAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removePairingFromHAPAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_auditPairingsForHAPAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findConflictingAccessory:(id)arg1 ;
-(void)setAuditUsersToBeAdded:(NSArray *)arg1 ;
-(char)lastOperationFailed;
-(long long)_accessoryInvitationState;
-(HAPPairingIdentity *)ownerPairingIdentity;
-(void)_endBackoffTimer;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 parentUUID:(id)arg2 ;
-(char)isRemoveOperation;
-(void)updateDelegate:(id)arg1 ;
-(char)mergeWithOperation:(id)arg1 ;
@end

