using System;
using System.ComponentModel;

namespace Jyc.Expr
{
    static class ConvertHelper
    { 
        public static object ChangeType(object value, Type conversionType)
        {
            if (value == null && conversionType.IsPrimitive)
              return Activator.CreateInstance(conversionType); // Return default value
            object o = null;
            try
            {
                o = System.Convert.ChangeType(value, conversionType);
            }
            catch
            {
                if (conversionType == null)
                {
                    throw new ArgumentNullException("conversionType");
                }
                if (value == null)
                {
                    if (conversionType.IsValueType)
                    {
                        throw new InvalidCastException("Cannot cast null to ValueType" );
                    }
                    return null;
                }
                TypeConverter typeConverter = TypeDescriptor.GetConverter(value);
                if (typeConverter == null || !typeConverter.CanConvertTo(conversionType))
                {
                    throw new InvalidCastException("Cannot cast to target type");
                }

                return typeConverter.ConvertTo(value, conversionType);

            }
            return o;
        }

        public static string ToString(object value )
        {
            object o = null;
            try
            {
                o = System.Convert.ChangeType(value, typeof(string));
            }
            catch
            {
                if (value == null)
                {
                    return string.Empty;
                }
                else if (value is DBNull)
                    return string.Empty;

                TypeConverter typeConverter = TypeDescriptor.GetConverter(value);
                if (typeConverter == null || !typeConverter.CanConvertTo(typeof(string)))
                {
                    throw new InvalidCastException("Cannot to target type");
                }

                return typeConverter.ConvertToString(value);

            }
            return (string)o;
        }
    }
}
