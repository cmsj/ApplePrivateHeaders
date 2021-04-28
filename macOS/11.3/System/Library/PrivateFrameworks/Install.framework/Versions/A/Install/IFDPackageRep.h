/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/Install-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IFDPackageRep : NSObject <NSCopying> {

	IFDPackageRep_Private* _private;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(long long)compare:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)identifier;
-(id)uniqueIdentifier;
-(id)version;
-(char)isActive;
-(id)location;
-(id)dictionaryRepresentation;
-(unsigned)order;
-(id)filename;
-(void)setActive:(char)arg1 ;
-(id)componentIdentifiers;
-(char)isSelfContained;
-(int)requiredAuthorization;
-(void)setPackageSpecifier:(id)arg1 ;
-(id)packageSpecifier;
-(long long)compareOrder:(id)arg1 ;
-(id)subpackages;
-(id)resolveComponentIDs;
-(id)resolvedPathForComponent:(id)arg1 ;
-(void)setResolvedPath:(id)arg1 forComponent:(id)arg2 ;
-(char)shouldBackRev;
-(void)setShouldBackRev:(char)arg1 ;
-(id)hashOfType:(id)arg1 ;
-(int)requiredPostInstallAction;
-(id)mustCloseApps;
-(unsigned long long)installKBytes;
-(void)setSelfContained:(char)arg1 ;
-(id)hashTypes;
-(void)addDigest:(id)arg1 ;
-(void)setSearchID:(id)arg1 forComponentIdentifier:(id)arg2 ;
-(void)setVersionAttributes:(id)arg1 forComponentIdentifier:(id)arg2 ;
-(void)setMustCloseApps:(id)arg1 ;
-(id)locationsIncludingChildren;
-(char)isRelocatable;
-(id)defaultRelocatableLocation;
-(id)initWithPackage:(id)arg1 atLocation:(id)arg2 ;
-(id)locatorTokenDefinitions;
-(unsigned long long)archiveKBytes;
-(id)searchIDForComponentIdentifier:(id)arg1 ;
-(id)normalizedVersion;
-(id)locatorPathMappings;
-(id)versionAttributesForComponentIdentifier:(id)arg1 ;
@end
