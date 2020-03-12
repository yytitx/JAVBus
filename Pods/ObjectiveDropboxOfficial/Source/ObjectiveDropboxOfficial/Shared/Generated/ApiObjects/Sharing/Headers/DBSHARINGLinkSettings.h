///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBSHARINGLinkAudience;
@class DBSHARINGLinkExpiry;
@class DBSHARINGLinkPassword;
@class DBSHARINGLinkSettings;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LinkSettings` struct.
///
/// Settings that apply to a link.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGLinkSettings : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The access level on the link for this file. Currently, it only accepts
/// 'viewer' and 'viewer_no_comment'.
@property (nonatomic, readonly, nullable) DBSHARINGAccessLevel *accessLevel;

/// The type of audience on the link for this file.
@property (nonatomic, readonly, nullable) DBSHARINGLinkAudience *audience;

/// An expiry timestamp to set on a link.
@property (nonatomic, readonly, nullable) DBSHARINGLinkExpiry *expiry;

/// The password for the link.
@property (nonatomic, readonly, nullable) DBSHARINGLinkPassword *password;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accessLevel The access level on the link for this file. Currently, it
/// only accepts 'viewer' and 'viewer_no_comment'.
/// @param audience The type of audience on the link for this file.
/// @param expiry An expiry timestamp to set on a link.
/// @param password The password for the link.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessLevel:(nullable DBSHARINGAccessLevel *)accessLevel
                           audience:(nullable DBSHARINGLinkAudience *)audience
                             expiry:(nullable DBSHARINGLinkExpiry *)expiry
                           password:(nullable DBSHARINGLinkPassword *)password;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LinkSettings` struct.
///
@interface DBSHARINGLinkSettingsSerializer : NSObject

///
/// Serializes `DBSHARINGLinkSettings` instances.
///
/// @param instance An instance of the `DBSHARINGLinkSettings` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGLinkSettings` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGLinkSettings *)instance;

///
/// Deserializes `DBSHARINGLinkSettings` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGLinkSettings` API object.
///
/// @return An instantiation of the `DBSHARINGLinkSettings` object.
///
+ (DBSHARINGLinkSettings *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
