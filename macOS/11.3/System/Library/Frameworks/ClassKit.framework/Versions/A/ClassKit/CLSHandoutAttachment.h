/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>
#import <libobjc.A.dylib/CLSCollaborationStateRepresentable.h>

@class NSURL, NSArray, NSString, NSDate, CLSHandout;

@interface CLSHandoutAttachment : CLSObject <CLSRelationable, CLSCollaborationStateRepresentable> {

	int _shareType;
	int _permissionType;
	NSURL* _URL;
	NSArray* _contextPath;
	NSString* _title;
	NSString* _bundleIdentifier;
	NSString* _applicationName;
	NSString* _contentStoreIdentifier;
	NSString* _contextSummary;
	NSString* _contextCustomTypeName;
	char _contextSourceIsCatalog;
	int _completionStatus;
	long long _displayOrder;
	long long _contextType;
	NSDate* _dateLastCompleted;
	char _locked;
	int _type;
	NSString* _storeIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLocked,nonatomic) char locked;                    //@synthesize locked=_locked - In the implementation block
@property (nonatomic,retain) NSDate * dateLastCompleted; 
@property (nonatomic,copy) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int shareType; 
@property (assign,nonatomic) int permissionType; 
@property (assign,nonatomic) long long contextType; 
@property (assign,nonatomic) long long displayOrder; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,copy) NSArray * contextPath; 
@property (nonatomic,copy) NSString * contextSummary; 
@property (nonatomic,copy) NSString * contextCustomTypeName; 
@property (assign,nonatomic) char contextSourceIsCatalog; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * applicationName; 
@property (nonatomic,copy) NSString * contentStoreIdentifier; 
@property (nonatomic,readonly) NSString * parentObjectID; 
@property (nonatomic,readonly) CLSHandout * parent; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSArray * collaborationStates; 
@property (assign,nonatomic) int completionStatus; 
@property (getter=isComplete,nonatomic,readonly) char complete; 
+(char)supportsSecureCoding;
+(id)relations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(id)_init;
-(NSURL *)URL;
-(NSString *)bundleIdentifier;
-(void)setURL:(NSURL *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isComplete;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(NSString *)applicationName;
-(NSArray *)assets;
-(void)setApplicationName:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(long long)contextType;
-(void)setContextType:(long long)arg1 ;
-(int)completionStatus;
-(void)setCompletionStatus:(int)arg1 ;
-(char)validateObject:(id*)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(void)setDisplayOrder:(long long)arg1 ;
-(long long)displayOrder;
-(NSArray *)collaborationStates;
-(NSString *)contentStoreIdentifier;
-(NSString *)contextSummary;
-(void)setContextSummary:(NSString *)arg1 ;
-(NSString *)contextCustomTypeName;
-(void)setContextCustomTypeName:(NSString *)arg1 ;
-(void)setContentStoreIdentifier:(NSString *)arg1 ;
-(int)shareType;
-(int)permissionType;
-(NSArray *)contextPath;
-(char)contextSourceIsCatalog;
-(NSDate *)dateLastCompleted;
-(void)setDateLastCompleted:(NSDate *)arg1 ;
-(id)initWithType:(int)arg1 title:(id)arg2 ;
-(void)addAsset:(id)arg1 ;
-(void)removeAsset:(id)arg1 ;
-(void)setContextPath:(NSArray *)arg1 ;
-(void)setContextSourceIsCatalog:(char)arg1 ;
-(void)setShareType:(int)arg1 ;
-(void)setPermissionType:(int)arg1 ;
-(void)getNumberOfAttemptsWithCompletion:(/*^block*/id)arg1 ;
@end
