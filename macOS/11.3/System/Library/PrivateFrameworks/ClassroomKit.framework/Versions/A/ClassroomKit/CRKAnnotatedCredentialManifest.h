/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary, NSSet;

@interface CRKAnnotatedCredentialManifest : NSObject <NSSecureCoding> {

	char _modified;
	NSMutableDictionary* _annotationsByPersistentID;

}

@property (nonatomic,readonly) NSMutableDictionary * annotationsByPersistentID;              //@synthesize annotationsByPersistentID=_annotationsByPersistentID - In the implementation block
@property (assign,nonatomic) char modified;                                                  //@synthesize modified=_modified - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@property (nonatomic,copy,readonly) NSSet * persistentIDs; 
+(char)supportsSecureCoding;
+(id)manifestWithData:(id)arg1 ;
-(id)init;
-(char)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentation;
-(char)modified;
-(void)setModified:(char)arg1 ;
-(NSDictionary *)debugInfo;
-(NSSet *)persistentIDs;
-(void)removePersistentID:(id)arg1 ;
-(void)addPersistentID:(id)arg1 withAnnotation:(id)arg2 ;
-(id)annotationForPersistentID:(id)arg1 ;
-(NSMutableDictionary *)annotationsByPersistentID;
@end
