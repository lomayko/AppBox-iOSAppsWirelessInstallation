///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSsoChangeLoginUrlDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SsoChangeLoginUrlDetails` struct.
///
/// Changed sign-in URL for SSO.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSsoChangeLoginUrlDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous single sign-on login URL.
@property (nonatomic, readonly, copy) NSString *previousValue;

/// New single sign-on login URL.
@property (nonatomic, readonly, copy) NSString *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue Previous single sign-on login URL.
/// @param dNewValue New single sign-on login URL.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(NSString *)previousValue dNewValue:(NSString *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SsoChangeLoginUrlDetails` struct.
///
@interface DBTEAMLOGSsoChangeLoginUrlDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSsoChangeLoginUrlDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSsoChangeLoginUrlDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoChangeLoginUrlDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSsoChangeLoginUrlDetails *)instance;

///
/// Deserializes `DBTEAMLOGSsoChangeLoginUrlDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoChangeLoginUrlDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSsoChangeLoginUrlDetails` object.
///
+ (DBTEAMLOGSsoChangeLoginUrlDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
